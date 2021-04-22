#include "country.h"

QString Country::getPopulationDensity() const
{
    return populationDensity;
}

void Country::setPopulationDensity(const QString &value)
{
    populationDensity = value;
}

QString Country::getName() const
{
    return name;
}

void Country::setName(const QString &value)
{
    name = value;
}

QString Country::getCapital() const
{
    return capital;
}

void Country::setCapital(const QString &value)
{
    capital = value;
}

QString Country::getPopulation() const
{
    return population;
}

void Country::setPopulation(const QString &value)
{
    population = value;
}

QString Country::getArea() const
{
    return area;
}

void Country::setArea(const QString &value)
{
    area = value;
}


QString Country::getCoastline() const
{
    return coastline;
}

void Country::setCoastline(const QString &value)
{
    coastline = value;
}

QString Country::getNetMigration() const
{
    return netMigration;
}

void Country::setNetMigration(const QString &value)
{
    netMigration = value;
}

QString Country::getInfantMortality() const
{
    return infantMortality;
}

void Country::setInfantMortality(const QString &value)
{
    infantMortality = value;
}

QString Country::getGdp() const
{
    return gdp;
}

void Country::setGdp(const QString &value)
{
    gdp = value;
}

QString Country::getLiteracy() const
{
    return literacy;
}

void Country::setLiteracy(const QString &value)
{
    literacy = value;
}

QString Country::getPhones() const
{
    return phones;
}

void Country::setPhones(const QString &value)
{
    phones = value;
}

QString Country::getArableLand() const
{
    return arableLand;
}

void Country::setArableLand(const QString &value)
{
    arableLand = value;
}

QString Country::getCropLand() const
{
    return cropLand;
}

void Country::setCropLand(const QString &value)
{
    cropLand = value;
}

QString Country::getOther() const
{
    return other;
}

void Country::setOther(const QString &value)
{
    other = value;
}

QString Country::getClimate() const
{
    return climate;
}

void Country::setClimate(const QString &value)
{
    climate = value;
}

QString Country::getBirthrate() const
{
    return birthrate;
}

void Country::setBirthrate(const QString &value)
{
    birthrate = value;
}

QString Country::getDeathrate() const
{
    return deathrate;
}

void Country::setDeathrate(const QString &value)
{
    deathrate = value;
}

QString Country::getAgriculture() const
{
    return agriculture;
}

void Country::setAgriculture(const QString &value)
{
    agriculture = value;
}

QString Country::getIndustry() const
{
    return industry;
}

void Country::setIndustry(const QString &value)
{
    industry = value;
}

QString Country::getService() const
{
    return service;
}

void Country::setService(const QString &value)
{
    service = value;
}

Country::Country()
{

}

Country::Country(QString name, QString capital, QString population, QString area, QString populationDensity, QString coastline, QString netMigration, QString infantMortality, QString gdp, QString literacy, QString phones, QString arableLand, QString cropLand, QString other, QString climate, QString birthrate, QString deathrate, QString agriculture, QString industry, QString service)
{
    this->name = name;
    this->capital = capital;
    this->population = population;
    this->area = area;
    this->populationDensity = populationDensity;
    this->coastline = coastline;
    this->netMigration = netMigration;
    this->infantMortality = infantMortality;
    this->gdp = gdp;
    this->literacy = literacy;
    this->phones = phones;
    this->arableLand = arableLand;
    this->cropLand = cropLand;
    this->other = other;
    this->climate = climate;
    this->birthrate = birthrate;
    this->deathrate = deathrate;
    this->agriculture = agriculture;
    this->industry = industry;
    this->service = service;
}
