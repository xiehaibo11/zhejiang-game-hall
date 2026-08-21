.class public Lcom/bianfeng/privategetui/bean/YmnGetuiTagOrAliasBean;
.super Ljava/lang/Object;
.source "YmnGetuiTagOrAliasBean.java"


# instance fields
.field private code:Ljava/lang/String;

.field private sn:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 14
    iput-object p1, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiTagOrAliasBean;->sn:Ljava/lang/String;

    .line 15
    iput-object p2, p0, Lcom/bianfeng/privategetui/bean/YmnGetuiTagOrAliasBean;->code:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 1

    .line 21
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
