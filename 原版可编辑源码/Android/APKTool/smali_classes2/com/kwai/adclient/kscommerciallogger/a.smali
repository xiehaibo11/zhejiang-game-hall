.class public final Lcom/kwai/adclient/kscommerciallogger/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwai/adclient/kscommerciallogger/a$a;
    }
.end annotation


# instance fields
.field private aMQ:Lcom/kwai/adclient/kscommerciallogger/a/a;

.field private aMR:Lcom/kwai/adclient/kscommerciallogger/a/b;

.field private aMS:Lorg/json/JSONObject;

.field private aMT:Z

.field private isDebug:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->isDebug:Z

    iput-boolean v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMT:Z

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwai/adclient/kscommerciallogger/a;-><init>()V

    return-void
.end method

.method public static KW()Lcom/kwai/adclient/kscommerciallogger/a;
    .locals 1

    invoke-static {}, Lcom/kwai/adclient/kscommerciallogger/a$a;->KW()Lcom/kwai/adclient/kscommerciallogger/a;

    move-result-object v0

    return-object v0
.end method

.method private d(Lcom/kwai/adclient/kscommerciallogger/model/c;)V
    .locals 4

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMQ:Lcom/kwai/adclient/kscommerciallogger/a/a;

    if-eqz v0, :cond_3

    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->getTag()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->La()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v2

    if-nez v2, :cond_0

    const-string v2, ""

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->La()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v2

    iget-object v2, v2, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->value:Ljava/lang/String;

    :goto_0
    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Lb()Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    move-result-object v3

    if-nez v3, :cond_1

    goto :goto_1

    :cond_1
    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Lb()Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    move-result-object v3

    iget-object v3, v3, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->value:Ljava/lang/String;

    :goto_1
    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Lc()Lcom/kwai/adclient/kscommerciallogger/model/d;

    move-result-object v3

    if-nez v3, :cond_2

    goto :goto_2

    :cond_2
    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Lc()Lcom/kwai/adclient/kscommerciallogger/model/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/kwai/adclient/kscommerciallogger/model/d;->getValue()Ljava/lang/String;

    :goto_2
    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Lf()Ljava/lang/String;

    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Ld()Lorg/json/JSONObject;

    move-result-object v3

    invoke-static {v3}, Lcom/kwai/adclient/kscommerciallogger/b;->O(Lorg/json/JSONObject;)Ljava/lang/String;

    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->Le()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p1}, Lcom/kwai/adclient/kscommerciallogger/b;->O(Lorg/json/JSONObject;)Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/kwai/adclient/kscommerciallogger/a/a;->S(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method


# virtual methods
.method public final KX()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMS:Lorg/json/JSONObject;

    return-object v0
.end method

.method public final KY()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMT:Z

    return v0
.end method

.method public final a(Lcom/kwai/adclient/kscommerciallogger/a/a;Lcom/kwai/adclient/kscommerciallogger/a/b;Lorg/json/JSONObject;ZZ)V
    .locals 0

    iput-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMQ:Lcom/kwai/adclient/kscommerciallogger/a/a;

    iput-object p2, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMR:Lcom/kwai/adclient/kscommerciallogger/a/b;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMS:Lorg/json/JSONObject;

    iput-boolean p4, p0, Lcom/kwai/adclient/kscommerciallogger/a;->isDebug:Z

    iput-boolean p5, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMT:Z

    return-void
.end method

.method public final c(Lcom/kwai/adclient/kscommerciallogger/model/c;)V
    .locals 2

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMQ:Lcom/kwai/adclient/kscommerciallogger/a/a;

    const-string v0, "KSCommercialLogger"

    const-string v1, "rl rtLog is null please check it"

    invoke-interface {p1, v0, v1}, Lcom/kwai/adclient/kscommerciallogger/a/a;->T(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwai/adclient/kscommerciallogger/a;->d(Lcom/kwai/adclient/kscommerciallogger/model/c;)V

    iget-object v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->aMR:Lcom/kwai/adclient/kscommerciallogger/a/b;

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->KZ()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwai/adclient/kscommerciallogger/model/c;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, p1}, Lcom/kwai/adclient/kscommerciallogger/a/b;->U(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final isDebug()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwai/adclient/kscommerciallogger/a;->isDebug:Z

    return v0
.end method
