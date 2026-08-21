.class public Lcom/bianfeng/paylib/action/RequestNetIpAction;
.super Ljava/lang/Object;
.source "RequestNetIpAction.java"


# static fields
.field private static action:Lcom/bianfeng/paylib/action/RequestNetIpAction;


# instance fields
.field private callBack:Lcom/bianfeng/paylib/action/RequestNetIpCallBack;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 20
    new-instance v0, Lcom/bianfeng/paylib/action/RequestNetIpAction;

    invoke-direct {v0}, Lcom/bianfeng/paylib/action/RequestNetIpAction;-><init>()V

    sput-object v0, Lcom/bianfeng/paylib/action/RequestNetIpAction;->action:Lcom/bianfeng/paylib/action/RequestNetIpAction;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/paylib/action/RequestNetIpAction;)Lcom/bianfeng/paylib/action/RequestNetIpCallBack;
    .locals 0

    .line 18
    iget-object p0, p0, Lcom/bianfeng/paylib/action/RequestNetIpAction;->callBack:Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    return-object p0
.end method

.method public static getInstance()Lcom/bianfeng/paylib/action/RequestNetIpAction;
    .locals 1

    .line 23
    sget-object v0, Lcom/bianfeng/paylib/action/RequestNetIpAction;->action:Lcom/bianfeng/paylib/action/RequestNetIpAction;

    return-object v0
.end method


# virtual methods
.method public GetNetIp()V
    .locals 1

    .line 30
    new-instance v0, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;-><init>(Lcom/bianfeng/paylib/action/RequestNetIpAction;)V

    .line 71
    invoke-virtual {v0}, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;->start()V

    return-void
.end method

.method public setCallBack(Lcom/bianfeng/paylib/action/RequestNetIpCallBack;)Lcom/bianfeng/paylib/action/RequestNetIpAction;
    .locals 0

    .line 26
    iput-object p1, p0, Lcom/bianfeng/paylib/action/RequestNetIpAction;->callBack:Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    return-object p0
.end method
