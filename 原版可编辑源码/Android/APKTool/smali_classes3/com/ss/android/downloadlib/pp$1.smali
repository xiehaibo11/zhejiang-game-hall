.class Lcom/ss/android/downloadlib/pp$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/common/AppStatusManager$InnerAppStatusChangeCaller;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/pp;->rg(Lcom/ss/android/download/api/config/df;)Lcom/ss/android/download/api/rg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/pp;

.field final synthetic rg:Lcom/ss/android/download/api/config/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/pp;Lcom/ss/android/download/api/config/df;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/ss/android/downloadlib/pp$1;->df:Lcom/ss/android/downloadlib/pp;

    iput-object p2, p0, Lcom/ss/android/downloadlib/pp$1;->rg:Lcom/ss/android/download/api/config/df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public isAppInBackground()Z
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/ss/android/downloadlib/pp$1;->rg:Lcom/ss/android/download/api/config/df;

    invoke-interface {v0}, Lcom/ss/android/download/api/config/df;->rg()Z

    move-result v0

    return v0
.end method
