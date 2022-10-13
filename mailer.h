#ifndef MAILER_H
#define MAILER_H

#include <QString>

class Mailer
{

public:
  Mailer (QString from_mail,
	  QString to_mail,
      QString cc_mail) {
              m_from_mail = from_mail;
              m_to_mail = to_mail;
              m_cc_mail = cc_mail;
          };
  ~Mailer();
  QString CurrentTime();

public slots:

private:
   QString m_from_mail;
   QString m_to_mail;
   QString m_cc_mail;

};
#endif // MAILER_H
