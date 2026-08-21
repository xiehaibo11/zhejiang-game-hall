.class public Lcom/ss/android/downloadlib/df/pp;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/df/pp$rg;
    }
.end annotation


# instance fields
.field private rg:J


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 24
    iput-wide v0, p0, Lcom/ss/android/downloadlib/df/pp;->rg:J

    .line 27
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->registerAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/downloadlib/df/pp$1;)V
    .locals 0

    .line 12
    invoke-direct {p0}, Lcom/ss/android/downloadlib/df/pp;-><init>()V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/df/pp;)J
    .locals 2

    .line 12
    iget-wide v0, p0, Lcom/ss/android/downloadlib/df/pp;->rg:J

    return-wide v0
.end method

.method public static rg()Lcom/ss/android/downloadlib/df/pp;
    .locals 1

    .line 21
    invoke-static {}, Lcom/ss/android/downloadlib/df/pp$rg;->rg()Lcom/ss/android/downloadlib/df/pp;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public df(Lcom/ss/android/downloadlib/df/pt;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/16 v0, 0x4b0

    .line 112
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "check_an_result_delay"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-lez v1, :cond_1

    move v0, v1

    :cond_1
    int-to-long v0, v0

    .line 116
    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pt;J)V

    return-void
.end method

.method public onAppBackground()V
    .locals 0

    return-void
.end method

.method public onAppForeground()V
    .locals 2

    .line 32
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/ss/android/downloadlib/df/pp;->rg:J

    return-void
.end method

.method public rg(Lcom/ss/android/downloadlib/df/pt;)V
    .locals 2

    const-wide/16 v0, 0x1388

    .line 67
    invoke-virtual {p0, p1, v0, v1}, Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pt;J)V

    return-void
.end method

.method public rg(Lcom/ss/android/downloadlib/df/pt;J)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 49
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/df/pp$1;

    invoke-direct {v1, p0, p2, p3, p1}, Lcom/ss/android/downloadlib/df/pp$1;-><init>(Lcom/ss/android/downloadlib/df/pp;JLcom/ss/android/downloadlib/df/pt;)V

    invoke-virtual {v0, v1, p2, p3}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;J)V

    return-void
.end method
