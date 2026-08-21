.class public final Lcom/kwad/sdk/crash/report/upload/e;
.super Ljava/lang/Object;


# static fields
.field public static aBA:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBB:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBC:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBD:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBE:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBF:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBx:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBy:Lcom/kwad/sdk/crash/report/upload/e;

.field public static aBz:Lcom/kwad/sdk/crash/report/upload/e;


# instance fields
.field private final aBG:I

.field private final aBH:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0xb

    const-string v2, "Please init."

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBx:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0xc

    const-string v2, "error when zip_file"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBy:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0xd

    const-string v2, "There is no valid network."

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBz:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0xe

    const-string v2, "Token is invalid."

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBA:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0xf

    const-string v2, "upload task execute frequence exceed."

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBB:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0x10

    const-string v2, "process request fail."

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBC:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0x11

    const-string v2, "sever response error http code"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBD:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0x12

    const-string v2, "sever response error result code"

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBE:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v0, Lcom/kwad/sdk/crash/report/upload/e;

    const/16 v1, -0x13

    const-string v2, "server bad response."

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/crash/report/upload/e;-><init>(ILjava/lang/String;)V

    sput-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBF:Lcom/kwad/sdk/crash/report/upload/e;

    return-void
.end method

.method private constructor <init>(ILjava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/kwad/sdk/crash/report/upload/e;->aBG:I

    iput-object p2, p0, Lcom/kwad/sdk/crash/report/upload/e;->aBH:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final vo()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/report/upload/e;->aBH:Ljava/lang/String;

    return-object v0
.end method
