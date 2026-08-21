.class public Lcom/bianfeng/seppellita/bean/ListPostBean;
.super Ljava/lang/Object;
.source "ListPostBean.java"


# instance fields
.field private test_name:Ljava/lang/String;

.field private user_tag:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/ListPostBean;->test_name:Ljava/lang/String;

    .line 23
    iput-object p2, p0, Lcom/bianfeng/seppellita/bean/ListPostBean;->user_tag:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getTest_name()Ljava/lang/String;
    .locals 1

    .line 27
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/ListPostBean;->test_name:Ljava/lang/String;

    return-object v0
.end method

.method public getUser_tag()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/ListPostBean;->user_tag:Ljava/lang/String;

    return-object v0
.end method

.method public setTest_name(Ljava/lang/String;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/ListPostBean;->test_name:Ljava/lang/String;

    return-void
.end method

.method public setUser_tag(Ljava/lang/String;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/ListPostBean;->user_tag:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 44
    invoke-static {p0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
