.class public Lcom/ss/android/download/api/model/rg;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/download/api/model/rg$rg;
    }
.end annotation


# instance fields
.field public df:Ljava/lang/String;

.field public pp:Ljava/lang/String;

.field public pt:Ljava/lang/String;

.field public q:Ljava/lang/String;

.field public rg:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/ss/android/download/api/model/rg$rg;)V
    .locals 1

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 10
    iput-object v0, p0, Lcom/ss/android/download/api/model/rg;->df:Ljava/lang/String;

    .line 18
    invoke-static {p1}, Lcom/ss/android/download/api/model/rg$rg;->rg(Lcom/ss/android/download/api/model/rg$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/rg;->rg:Ljava/lang/String;

    .line 19
    invoke-static {p1}, Lcom/ss/android/download/api/model/rg$rg;->df(Lcom/ss/android/download/api/model/rg$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/rg;->df:Ljava/lang/String;

    .line 20
    invoke-static {p1}, Lcom/ss/android/download/api/model/rg$rg;->q(Lcom/ss/android/download/api/model/rg$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/rg;->q:Ljava/lang/String;

    .line 21
    invoke-static {p1}, Lcom/ss/android/download/api/model/rg$rg;->pt(Lcom/ss/android/download/api/model/rg$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/model/rg;->pt:Ljava/lang/String;

    .line 22
    invoke-static {p1}, Lcom/ss/android/download/api/model/rg$rg;->pp(Lcom/ss/android/download/api/model/rg$rg;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/download/api/model/rg;->pp:Ljava/lang/String;

    return-void
.end method
