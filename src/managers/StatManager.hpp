struct Run {
    int start;
    int end;
};

class StatManager {
public:
    static Run getBestRun();
    static void updateBestRun(const Run & run);
    static std::string bestRunString();

private:
    static Run m_bestRun;
};