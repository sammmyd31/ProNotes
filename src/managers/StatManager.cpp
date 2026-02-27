#include "../managers/StatManager.hpp"

Run StatManager::m_bestRun { 0, 0 };

Run StatManager::getBestRun() {
    return m_bestRun;
}

void StatManager::updateBestRun(const Run & run) {
    int current = m_bestRun.end - m_bestRun.start;
    int other = run.end - run.start;
    if (other > current) {
        m_bestRun = run;
    }
}

std::string StatManager::bestRunString() {
    return std::format("{}-{}%", m_bestRun.start, m_bestRun.end);
}