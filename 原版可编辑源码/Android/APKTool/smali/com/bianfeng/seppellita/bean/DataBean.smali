.class public Lcom/bianfeng/seppellita/bean/DataBean;
.super Ljava/lang/Object;
.source "DataBean.java"


# instance fields
.field private db_seppellita_data:Ljava/lang/String;

.field private db_seppellita_dataTime:Ljava/lang/String;

.field private db_seppellita_time:J

.field private id:I


# direct methods
.method public constructor <init>(Ljava/lang/String;JLjava/lang/String;)V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_data:Ljava/lang/String;

    .line 16
    iput-object p4, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_dataTime:Ljava/lang/String;

    .line 17
    iput-wide p2, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_time:J

    return-void
.end method


# virtual methods
.method public getData()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_data:Ljava/lang/String;

    return-object v0
.end method

.method public getDataTime()Ljava/lang/String;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_dataTime:Ljava/lang/String;

    return-object v0
.end method

.method public getId()I
    .locals 1

    .line 26
    iget v0, p0, Lcom/bianfeng/seppellita/bean/DataBean;->id:I

    return v0
.end method

.method public getTime()J
    .locals 2

    .line 46
    iget-wide v0, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_time:J

    return-wide v0
.end method

.method public setDataTime(Ljava/lang/String;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/DataBean;->db_seppellita_dataTime:Ljava/lang/String;

    return-void
.end method

.method public setId(I)V
    .locals 0

    .line 30
    iput p1, p0, Lcom/bianfeng/seppellita/bean/DataBean;->id:I

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 22
    invoke-static {p0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
