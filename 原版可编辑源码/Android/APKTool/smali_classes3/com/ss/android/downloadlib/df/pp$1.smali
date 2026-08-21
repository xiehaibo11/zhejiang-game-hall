.class Lcom/ss/android/downloadlib/df/pp$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pt;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/df/pt;

.field final synthetic q:Lcom/ss/android/downloadlib/df/pp;

.field final synthetic rg:J


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/df/pp;JLcom/ss/android/downloadlib/df/pt;)V
    .locals 0

    .line 49
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/pp$1;->q:Lcom/ss/android/downloadlib/df/pp;

    iput-wide p2, p0, Lcom/ss/android/downloadlib/df/pp$1;->rg:J

    iput-object p4, p0, Lcom/ss/android/downloadlib/df/pp$1;->df:Lcom/ss/android/downloadlib/df/pt;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 56
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->isAppFocus()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 57
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-object v2, p0, Lcom/ss/android/downloadlib/df/pp$1;->q:Lcom/ss/android/downloadlib/df/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/df/pp;->rg(Lcom/ss/android/downloadlib/df/pp;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    iget-wide v2, p0, Lcom/ss/android/downloadlib/df/pp$1;->rg:J

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    goto :goto_0

    .line 60
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/pp$1;->df:Lcom/ss/android/downloadlib/df/pt;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/df/pt;->rg(Z)V

    goto :goto_1

    .line 58
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/pp$1;->df:Lcom/ss/android/downloadlib/df/pt;

    const/4 v1, 0x1

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/df/pt;->rg(Z)V

    :goto_1
    return-void
.end method
