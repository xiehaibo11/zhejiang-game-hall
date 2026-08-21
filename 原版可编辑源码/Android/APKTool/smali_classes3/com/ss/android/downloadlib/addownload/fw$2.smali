.class Lcom/ss/android/downloadlib/addownload/fw$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/utils/rz$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/fw;->df(Lcom/ss/android/download/api/config/n;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/fw;

.field final synthetic rg:Lcom/ss/android/download/api/config/n;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/fw;Lcom/ss/android/download/api/config/n;)V
    .locals 0

    .line 237
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw$2;->df:Lcom/ss/android/downloadlib/addownload/fw;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/fw$2;->rg:Lcom/ss/android/download/api/config/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 240
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw$2;->rg:Lcom/ss/android/download/api/config/n;

    if-eqz v0, :cond_0

    .line 241
    invoke-interface {v0}, Lcom/ss/android/download/api/config/n;->rg()V

    :cond_0
    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 1

    .line 247
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/fw$2;->rg:Lcom/ss/android/download/api/config/n;

    if-eqz v0, :cond_0

    .line 248
    invoke-interface {v0, p1}, Lcom/ss/android/download/api/config/n;->rg(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
