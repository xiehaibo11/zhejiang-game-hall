.class Lcom/ss/android/downloadlib/addownload/pt$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pt;->rg(IJJLcom/ss/android/downloadlib/addownload/pp$rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/pt;

.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/pp$rg;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pt;Lcom/ss/android/downloadlib/addownload/pp$rg;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pt$2;->df:Lcom/ss/android/downloadlib/addownload/pt;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/pt$2;->rg:Lcom/ss/android/downloadlib/addownload/pp$rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 112
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$2;->df:Lcom/ss/android/downloadlib/addownload/pt;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/pt;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 116
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$2;->df:Lcom/ss/android/downloadlib/addownload/pt;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg(Lcom/ss/android/downloadlib/addownload/pt;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 117
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pt$2;->rg:Lcom/ss/android/downloadlib/addownload/pp$rg;

    invoke-interface {v0}, Lcom/ss/android/downloadlib/addownload/pp$rg;->rg()V

    return-void
.end method
