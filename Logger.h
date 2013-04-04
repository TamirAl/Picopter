/* 
 * File:   Logger.h
 * Author: matt
 *
 * Created on 01 November 2012, 22:49
 */

#ifndef LOGGER_H
#define	LOGGER_H

#include <iostream>
#include <fstream>
#include <sstream>



class LoggerClass
{
public:
    LoggerClass();
    LoggerClass(const LoggerClass& orig);
    virtual ~LoggerClass();
    
    void open(const char* filename);
    void update();
    void flush();
    int sampleno;
    bool logging;
    std::stringstream log;
    
private:
    int timeSinceLastFlush;
    std::fstream logFile;

};
extern LoggerClass LogMan;
#endif	/* LOGGER_H */

