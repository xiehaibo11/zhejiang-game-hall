.class public Lcom/bianfeng/seppellita/utils/TimeUtils;
.super Ljava/lang/Object;
.source "TimeUtils.java"


# instance fields
.field private volatile DEFAULT_INTERVAL_DAY:I

.field private volatile DEFAULT_INTERVAL_TIME:I

.field private volatile DEFAULT_OFFSET_TIME:I

.field private volatile enterTime:J

.field private volatile interval_day:I

.field private volatile interval_time:I

.field private volatile mexPageSize:I

.field private volatile offsetTime:J

.field private volatile onLineTime:J


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const v0, 0xea60

    .line 15
    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_INTERVAL_TIME:I

    const/4 v0, 0x0

    .line 16
    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_OFFSET_TIME:I

    const/4 v1, 0x7

    .line 17
    iput v1, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_INTERVAL_DAY:I

    const-wide/16 v2, 0x0

    .line 18
    iput-wide v2, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->enterTime:J

    .line 19
    iput-wide v2, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->onLineTime:J

    .line 20
    iput v1, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_day:I

    .line 21
    iput-wide v2, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->offsetTime:J

    .line 22
    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_time:I

    const/high16 v0, 0x100000

    .line 23
    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->mexPageSize:I

    .line 26
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getCurrentTime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->enterTime:J

    return-void
.end method

.method private setDefaule()V
    .locals 2

    .line 102
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_INTERVAL_DAY:I

    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_day:I

    .line 103
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_OFFSET_TIME:I

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->offsetTime:J

    .line 104
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_INTERVAL_TIME:I

    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_time:I

    return-void
.end method


# virtual methods
.method public getCurrentTime()J
    .locals 2

    .line 46
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    return-wide v0
.end method

.method public getCurrentTimeFormat()Ljava/lang/String;
    .locals 3

    .line 72
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    .line 73
    new-instance v1, Ljava/text/SimpleDateFormat;

    const-string v2, "yyyy-MM-dd"

    invoke-direct {v1, v2}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 74
    invoke-virtual {v1, v0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getIntervalPostTime()J
    .locals 2

    .line 60
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_time:I

    if-eqz v0, :cond_0

    .line 61
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_time:I

    :goto_0
    int-to-long v0, v0

    return-wide v0

    .line 63
    :cond_0
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->DEFAULT_INTERVAL_TIME:I

    goto :goto_0
.end method

.method public getIntervalSelectTime()Ljava/lang/String;
    .locals 1

    .line 108
    iget v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_day:I

    invoke-virtual {p0, v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getLastTime(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLastMonthTime()Ljava/lang/String;
    .locals 1

    const/16 v0, 0x1e

    .line 112
    invoke-virtual {p0, v0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getLastTime(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getLastTime(I)Ljava/lang/String;
    .locals 2

    .line 83
    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    neg-int p1, p1

    const/4 v1, 0x5

    .line 84
    invoke-virtual {v0, v1, p1}, Ljava/util/Calendar;->add(II)V

    .line 85
    new-instance p1, Ljava/text/SimpleDateFormat;

    const-string v1, "yyyy-MM-dd"

    invoke-direct {p1, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 86
    invoke-virtual {v0}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public declared-synchronized getOffsetTime()J
    .locals 4

    monitor-enter p0

    .line 55
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->offsetTime:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    sub-long/2addr v0, v2

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public getOnLineTime()J
    .locals 2

    .line 98
    iget-wide v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->onLineTime:J

    return-wide v0
.end method

.method public onPause()V
    .locals 4

    .line 94
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getCurrentTime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->enterTime:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    iput-wide v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->onLineTime:J

    return-void
.end method

.method public onResume()V
    .locals 2

    .line 90
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getCurrentTime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->enterTime:J

    return-void
.end method

.method public setInit(Lcom/bianfeng/seppellita/bean/InitBean$DataBean;)V
    .locals 4

    if-eqz p1, :cond_0

    .line 36
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getValid_day()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_day:I

    .line 37
    invoke-virtual {p0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->getCurrentTime()J

    move-result-wide v0

    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getTime()J

    move-result-wide v2

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->offsetTime:J

    .line 38
    invoke-virtual {p1}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->getInterval()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/seppellita/utils/TimeUtils;->interval_time:I

    goto :goto_0

    .line 40
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/seppellita/utils/TimeUtils;->setDefaule()V

    :goto_0
    return-void
.end method
