#ifndef LINPLAYER_H
#define LINPLAYER_H

#include <QtWidgets/QMainWindow>
#include "ui_linplayer.h"
#include "PlayCore.h"

class LinPlayer : public QMainWindow
{
	Q_OBJECT

public:
	LinPlayer(QWidget *parent = 0);
	~LinPlayer();

private slots:
	void ctrl_open(void);

	void ctrl_play(void);
	void ctrl_stop(void);
	void ctrl_previous(void);
	void ctrl_next(void);

	void ctrl_list(void);
	void ctrl_fullscreen(void);

	void ctrl_sound(void);

private:
	Ui::LinPlayerClass ui;
	CPlayCore *player;
};

#endif // LINPLAYER_H