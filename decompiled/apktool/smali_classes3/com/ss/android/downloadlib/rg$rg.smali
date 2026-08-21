.class Lcom/ss/android/downloadlib/rg$rg;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/rg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "rg"
.end annotation


# instance fields
.field private final df:I

.field final synthetic rg:Lcom/ss/android/downloadlib/rg;


# direct methods
.method public constructor <init>(Lcom/ss/android/downloadlib/rg;I)V
    .locals 0

    .line 1104
    iput-object p1, p0, Lcom/ss/android/downloadlib/rg$rg;->rg:Lcom/ss/android/downloadlib/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 1105
    iput p2, p0, Lcom/ss/android/downloadlib/rg$rg;->df:I

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 1111
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/c;->df()V

    .line 1112
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/c;->q()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1113
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 1114
    iget-object v1, p0, Lcom/ss/android/downloadlib/rg$rg;->rg:Lcom/ss/android/downloadlib/rg;

    iget v2, p0, Lcom/ss/android/downloadlib/rg$rg;->df:I

    invoke-static {v1, v0, v2}, Lcom/ss/android/downloadlib/rg;->rg(Lcom/ss/android/downloadlib/rg;Ljava/util/concurrent/ConcurrentHashMap;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1117
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method
