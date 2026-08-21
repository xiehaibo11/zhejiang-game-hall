.class public Lcom/ss/android/download/api/download/q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/download/DownloadEventConfig;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/download/api/download/q$rg;
    }
.end annotation

.annotation runtime Ljava/lang/Deprecated;
.end annotation


# instance fields
.field private b:Ljava/lang/String;

.field private bm:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private df:Z

.field private f:Z

.field private fw:Ljava/lang/String;

.field private hq:Ljava/lang/Object;

.field private oh:Z

.field private pp:Ljava/lang/String;

.field private pt:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private rg:Ljava/lang/String;

.field private rz:Ljava/lang/String;

.field private un:Ljava/lang/String;

.field private ux:Ljava/lang/String;

.field private v:Z

.field private z:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private constructor <init>(Lcom/ss/android/download/api/download/q$rg;)V
    .locals 1

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->rg(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->rg:Ljava/lang/String;

    .line 34
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->df(Lcom/ss/android/download/api/download/q$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/download/q;->df:Z

    .line 35
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->q(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->q:Ljava/lang/String;

    .line 36
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->pt(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->pt:Ljava/lang/String;

    .line 37
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->pp(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->pp:Ljava/lang/String;

    .line 38
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->c(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->c:Ljava/lang/String;

    .line 39
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->fw(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->fw:Ljava/lang/String;

    .line 40
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->ux(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->ux:Ljava/lang/String;

    .line 41
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->rz(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->rz:Ljava/lang/String;

    .line 42
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->bm(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->bm:Ljava/lang/String;

    .line 43
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->b(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->b:Ljava/lang/String;

    .line 44
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->hq(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/Object;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->hq:Ljava/lang/Object;

    .line 45
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->oh(Lcom/ss/android/download/api/download/q$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/download/q;->oh:Z

    .line 46
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->f(Lcom/ss/android/download/api/download/q$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/download/q;->f:Z

    .line 47
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->v(Lcom/ss/android/download/api/download/q$rg;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/ss/android/download/api/download/q;->v:Z

    .line 48
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->un(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ss/android/download/api/download/q;->un:Ljava/lang/String;

    .line 49
    invoke-static {p1}, Lcom/ss/android/download/api/download/q$rg;->z(Lcom/ss/android/download/api/download/q$rg;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ss/android/download/api/download/q;->z:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/download/api/download/q$rg;Lcom/ss/android/download/api/download/q$1;)V
    .locals 0

    .line 9
    invoke-direct {p0, p1}, Lcom/ss/android/download/api/download/q;-><init>(Lcom/ss/android/download/api/download/q$rg;)V

    return-void
.end method


# virtual methods
.method public getClickButtonTag()Ljava/lang/String;
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->rg:Ljava/lang/String;

    return-object v0
.end method

.method public getClickContinueLabel()Ljava/lang/String;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->c:Ljava/lang/String;

    return-object v0
.end method

.method public getClickInstallLabel()Ljava/lang/String;
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->fw:Ljava/lang/String;

    return-object v0
.end method

.method public getClickItemTag()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getClickLabel()Ljava/lang/String;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->q:Ljava/lang/String;

    return-object v0
.end method

.method public getClickPauseLabel()Ljava/lang/String;
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->pp:Ljava/lang/String;

    return-object v0
.end method

.method public getClickStartLabel()Ljava/lang/String;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->pt:Ljava/lang/String;

    return-object v0
.end method

.method public getDownloadScene()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public getExtraEventObject()Ljava/lang/Object;
    .locals 1

    .line 99
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->hq:Ljava/lang/Object;

    return-object v0
.end method

.method public getExtraJson()Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getParamsJson()Lorg/json/JSONObject;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public getRefer()Ljava/lang/String;
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->z:Ljava/lang/String;

    return-object v0
.end method

.method public getStorageDenyLabel()Ljava/lang/String;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/ss/android/download/api/download/q;->bm:Ljava/lang/String;

    return-object v0
.end method

.method public isEnableClickEvent()Z
    .locals 1

    .line 109
    iget-boolean v0, p0, Lcom/ss/android/download/api/download/q;->df:Z

    return v0
.end method

.method public isEnableV3Event()Z
    .locals 1

    .line 114
    iget-boolean v0, p0, Lcom/ss/android/download/api/download/q;->oh:Z

    return v0
.end method

.method public setDownloadScene(I)V
    .locals 0

    return-void
.end method

.method public setRefer(Ljava/lang/String;)V
    .locals 0

    return-void
.end method
