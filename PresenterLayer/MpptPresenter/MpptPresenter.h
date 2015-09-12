#pragma once

#include <QObject>
class I_MpptData;

class MpptPresenter : public QObject
{
	Q_OBJECT
public:
	explicit MpptPresenter(const I_MpptData& mpptData);

private:
	void relayMpptData();

	const I_MpptData& mpptData_;

signals:
	void mppt1VoltageInReceived(double);
	void mppt1CurrentInReceived(double);
	void mppt1VoltageOutReceived(double);
	void mppt1CurrentOutReceived(double);
	void mppt1TypeReceived(QString);
	void mppt1ModeReceived(QString);

	void mppt2VoltageInReceived(double);
	void mppt2CurrentInReceived(double);
	void mppt2VoltageOutReceived(double);
	void mppt2CurrentOutReceived(double);
	void mppt2TypeReceived(QString);
	void mppt2ModeReceived(QString);

	void mppt3VoltageInReceived(double);
	void mppt3CurrentInReceived(double);
	void mppt3VoltageOutReceived(double);
	void mppt3CurrentOutReceived(double);
	void mppt3TypeReceived(QString);
	void mppt3ModeReceived(QString);

	void mppt4VoltageInReceived(double);
	void mppt4CurrentInReceived(double);
	void mppt4VoltageOutReceived(double);
	void mppt4CurrentOutReceived(double);
	void mppt4TypeReceived(QString);
	void mppt4ModeReceived(QString);

	void mppt5VoltageInReceived(double);
	void mppt5CurrentInReceived(double);
	void mppt5VoltageOutReceived(double);
	void mppt5CurrentOutReceived(double);
	void mppt5TypeReceived(QString);
	void mppt5ModeReceived(QString);

	void mppt6VoltageInReceived(double);
	void mppt6CurrentInReceived(double);
	void mppt6VoltageOutReceived(double);
	void mppt6CurrentOutReceived(double);
	void mppt6TypeReceived(QString);
	void mppt6ModeReceived(QString);

	void mppt7VoltageInReceived(double);
	void mppt7CurrentInReceived(double);
	void mppt7VoltageOutReceived(double);
	void mppt7CurrentOutReceived(double);
	void mppt7TypeReceived(QString);
	void mppt7ModeReceived(QString);
};