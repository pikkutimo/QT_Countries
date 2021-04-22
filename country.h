#ifndef COUNTRY_H
#define COUNTRY_H
#include <QString>

class Country
{
private:
    QString name;
    QString capital;
    QString population;
    QString area;
    QString populationDensity;
    QString coastline;
    QString netMigration;
    QString infantMortality;
    QString gdp;
    QString literacy;
    QString phones;
    QString arableLand;
    QString cropLand;
    QString other;
    QString climate;
    QString birthrate;
    QString deathrate;
    QString agriculture;
    QString industry;
    QString service;
public:
    Country();
    Country(QString name, QString capital, QString population, QString area, QString populationDensity,
        QString coastline, QString netMigration, QString infantMortality, QString gdp, QString literacy,
        QString phones, QString arableLand, QString cropLand, QString other, QString climate, QString birthrate,
        QString deathrate, QString agriculture, QString industry, QString service);

    QString getName() const;
    void setName(const QString &value);
    QString getCapital() const;
    void setCapital(const QString &value);
    QString getPopulation() const;
    void setPopulation(const QString &value);
    QString getArea() const;
    void setArea(const QString &value);
    QString getPopulationDensity() const;
    void setPopulationDensity(const QString &value);
    QString getCoastline() const;
    void setCoastline(const QString &value);
    QString getNetMigration() const;
    void setNetMigration(const QString &value);
    QString getInfantMortality() const;
    void setInfantMortality(const QString &value);
    QString getGdp() const;
    void setGdp(const QString &value);
    QString getLiteracy() const;
    void setLiteracy(const QString &value);
    QString getPhones() const;
    void setPhones(const QString &value);
    QString getArableLand() const;
    void setArableLand(const QString &value);
    QString getCropLand() const;
    void setCropLand(const QString &value);
    QString getOther() const;
    void setOther(const QString &value);
    QString getClimate() const;
    void setClimate(const QString &value);
    QString getBirthrate() const;
    void setBirthrate(const QString &value);
    QString getDeathrate() const;
    void setDeathrate(const QString &value);
    QString getAgriculture() const;
    void setAgriculture(const QString &value);
    QString getIndustry() const;
    void setIndustry(const QString &value);
    QString getService() const;
    void setService(const QString &value);
};

#endif // COUNTRY_H
