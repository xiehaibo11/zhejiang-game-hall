.class Lcom/ss/android/downloadlib/addownload/pp$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/pp$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pp;->fw(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/pp;

.field final synthetic rg:Z


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;Z)V
    .locals 0

    .line 762
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$5;->df:Lcom/ss/android/downloadlib/addownload/pp;

    iput-boolean p2, p0, Lcom/ss/android/downloadlib/addownload/pp$5;->rg:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 2

    .line 765
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$5;->df:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->q(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/pt;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 768
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$5;->df:Lcom/ss/android/downloadlib/addownload/pp;

    iget-boolean v1, p0, Lcom/ss/android/downloadlib/addownload/pp$5;->rg:Z

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/pp;->df(Lcom/ss/android/downloadlib/addownload/pp;Z)V

    return-void
.end method
