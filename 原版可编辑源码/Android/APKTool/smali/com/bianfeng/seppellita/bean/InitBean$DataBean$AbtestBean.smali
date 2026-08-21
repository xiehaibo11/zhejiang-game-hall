.class public Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;
.super Ljava/lang/Object;
.source "InitBean.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/bean/InitBean$DataBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AbtestBean"
.end annotation


# instance fields
.field private page:Ljava/lang/String;

.field private test_name:Ljava/lang/String;

.field private user_tag:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 136
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getListBean()Lcom/bianfeng/seppellita/bean/ListPostBean;
    .locals 3

    .line 172
    new-instance v0, Lcom/bianfeng/seppellita/bean/ListPostBean;

    invoke-virtual {p0}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getTest_name()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->getUser_tag()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/seppellita/bean/ListPostBean;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public getPage()Ljava/lang/String;
    .locals 1

    .line 148
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->page:Ljava/lang/String;

    return-object v0
.end method

.method public getTest_name()Ljava/lang/String;
    .locals 1

    .line 156
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->test_name:Ljava/lang/String;

    return-object v0
.end method

.method public getUser_tag()Ljava/lang/String;
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->user_tag:Ljava/lang/String;

    return-object v0
.end method

.method public setPage(Ljava/lang/String;)V
    .locals 0

    .line 152
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->page:Ljava/lang/String;

    return-void
.end method

.method public setTest_name(Ljava/lang/String;)V
    .locals 0

    .line 160
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->test_name:Ljava/lang/String;

    return-void
.end method

.method public setUser_tag(Ljava/lang/String;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;->user_tag:Ljava/lang/String;

    return-void
.end method
