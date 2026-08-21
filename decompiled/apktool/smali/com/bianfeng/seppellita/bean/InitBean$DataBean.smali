.class public Lcom/bianfeng/seppellita/bean/InitBean$DataBean;
.super Ljava/lang/Object;
.source "InitBean.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/seppellita/bean/InitBean;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DataBean"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;,
        Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;
    }
.end annotation


# instance fields
.field private abtest:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;",
            ">;"
        }
    .end annotation
.end field

.field private env:Ljava/lang/String;

.field private interval:Ljava/lang/String;

.field private pack_size:Ljava/lang/String;

.field private server_list:Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;

.field private time:Ljava/lang/String;

.field private valid_day:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getAbtest()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;",
            ">;"
        }
    .end annotation

    .line 117
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->abtest:Ljava/util/List;

    return-object v0
.end method

.method public getEnv()Ljava/lang/String;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->env:Ljava/lang/String;

    return-object v0
.end method

.method public getInterval()I
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->interval:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    return v0
.end method

.method public getPack_size()I
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->pack_size:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    mul-int/lit16 v0, v0, 0x400

    return v0
.end method

.method public getSevrer_list()Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->server_list:Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;

    return-object v0
.end method

.method public getTime()J
    .locals 2

    .line 69
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->time:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Long;->valueOf(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public getValid_day()I
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->valid_day:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public setAbtest(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/bianfeng/seppellita/bean/InitBean$DataBean$AbtestBean;",
            ">;)V"
        }
    .end annotation

    .line 121
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->abtest:Ljava/util/List;

    return-void
.end method

.method public setEnv(Ljava/lang/String;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->env:Ljava/lang/String;

    return-void
.end method

.method public setInterval(Ljava/lang/String;)V
    .locals 0

    .line 97
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->interval:Ljava/lang/String;

    return-void
.end method

.method public setPack_size(Ljava/lang/String;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->pack_size:Ljava/lang/String;

    return-void
.end method

.method public setSevrer_list(Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;)V
    .locals 0

    .line 113
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->server_list:Lcom/bianfeng/seppellita/bean/InitBean$DataBean$SevrerListBean;

    return-void
.end method

.method public setTime(Ljava/lang/String;)V
    .locals 0

    .line 73
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->time:Ljava/lang/String;

    return-void
.end method

.method public setValid_day(Ljava/lang/String;)V
    .locals 0

    .line 105
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/InitBean$DataBean;->valid_day:Ljava/lang/String;

    return-void
.end method
