.class public Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;
.super Ljava/lang/Object;
.source "YmnGetuiMessageBean.java"


# instance fields
.field private appId:Ljava/lang/String;

.field private clientId:Ljava/lang/String;

.field private content:Ljava/lang/String;

.field private messageId:Ljava/lang/String;

.field private pkgName:Ljava/lang/String;

.field private taskId:Ljava/lang/String;

.field private title:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    iput-object p1, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->appId:Ljava/lang/String;

    .line 19
    iput-object p2, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->taskId:Ljava/lang/String;

    .line 20
    iput-object p3, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->messageId:Ljava/lang/String;

    .line 21
    iput-object p4, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->pkgName:Ljava/lang/String;

    .line 22
    iput-object p5, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->clientId:Ljava/lang/String;

    .line 23
    iput-object p6, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->title:Ljava/lang/String;

    .line 24
    iput-object p7, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiMessageBean;->content:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 30
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const-string v0, ""

    return-object v0
.end method
