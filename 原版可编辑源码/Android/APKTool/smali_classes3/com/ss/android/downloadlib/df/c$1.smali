.class final Lcom/ss/android/downloadlib/df/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/c;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/df/ux;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:J

.field final synthetic q:Lcom/ss/android/downloadlib/df/ux;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadad/api/rg/df;JLcom/ss/android/downloadlib/df/ux;)V
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/c$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-wide p2, p0, Lcom/ss/android/downloadlib/df/c$1;->df:J

    iput-object p4, p0, Lcom/ss/android/downloadlib/df/c$1;->q:Lcom/ss/android/downloadlib/df/ux;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAppBackground()V
    .locals 0

    return-void
.end method

.method public onAppForeground()V
    .locals 2

    .line 72
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->unregisterAppSwitchListener(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$AppStatusChangeListener;)V

    .line 73
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/df/c$1$1;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/df/c$1$1;-><init>(Lcom/ss/android/downloadlib/df/c$1;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->rg(Ljava/lang/Runnable;)V

    return-void
.end method
