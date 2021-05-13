// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef EXPOSITIO_QT_EXPOSITIOADDRESSVALIDATOR_H
#define EXPOSITIO_QT_EXPOSITIOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class ExpositioAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ExpositioAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Expositio address widget validator, checks for a valid expositio address.
 */
class ExpositioAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit ExpositioAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // EXPOSITIO_QT_EXPOSITIOADDRESSVALIDATOR_H
