// Copyright (c) 2011-2017, The ManateeCoin Developers, The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "AboutDialog.h"
#include "CurrencyAdapter.h"
#include "Settings.h"

#include "ui_aboutdialog.h"
#include "version.h"

namespace WalletGui {

AboutDialog::AboutDialog(QWidget* _parent) : QDialog(_parent), m_ui(new Ui::AboutDialog) {
  m_ui->setupUi(this);
  setWindowTitle(QString(tr("About %1 Wallet")).arg(CurrencyAdapter::instance().getCurrencyDisplayName()));
  QString aboutText = m_ui->m_aboutLabel->text();
  m_ui->m_aboutLabel->setText(aboutText.arg(PROJECT_VERSION_LONG));
}

AboutDialog::~AboutDialog() {
}
  
}
