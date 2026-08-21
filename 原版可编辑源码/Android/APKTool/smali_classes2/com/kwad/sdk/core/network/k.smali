.class public Lcom/kwad/sdk/core/network/k;
.super Lcom/kwad/sdk/core/network/j;


# instance fields
.field public apA:I

.field public apB:Ljava/lang/String;

.field public apC:I

.field public apD:J

.field public apE:Ljava/lang/String;

.field public apF:I

.field public apG:I

.field public apH:I

.field public apI:I

.field public apj:J

.field public apk:J

.field public apl:J

.field public apm:I

.field public apn:J

.field public apo:J

.field public app:J

.field public apq:J

.field public apr:J

.field public aps:J

.field public apt:J

.field public apu:J

.field public apv:J

.field public apw:J

.field public apx:J

.field public apy:J

.field public apz:J

.field public result:I


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/j;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apj:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apk:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apl:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apn:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apo:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->app:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apq:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apr:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->aps:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apt:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apu:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apv:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apw:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apx:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apy:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apz:J

    const-string v2, ""

    iput-object v2, p0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/k;->apD:J

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/network/k;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
