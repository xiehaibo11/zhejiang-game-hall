.class public Lcom/bianfeng/seppellita/db/action/DelBeforeOneMouthDataTask;
.super Lcom/bianfeng/seppellita/db/action/BaseDataTast;
.source "DelBeforeOneMouthDataTask.java"


# instance fields
.field private t:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 11
    sget-object v0, Lcom/bianfeng/seppellita/db/action/DataTaskEnum;->DELBEFOREONEMOUTH:Lcom/bianfeng/seppellita/db/action/DataTaskEnum;

    invoke-direct {p0, v0}, Lcom/bianfeng/seppellita/db/action/BaseDataTast;-><init>(Lcom/bianfeng/seppellita/db/action/DataTaskEnum;)V

    .line 12
    iput-object p1, p0, Lcom/bianfeng/seppellita/db/action/DelBeforeOneMouthDataTask;->t:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 18
    :try_start_0
    invoke-static {}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->getInstance()Lcom/bianfeng/seppellita/db/action/ByteDataTask;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/seppellita/db/action/DelBeforeOneMouthDataTask;->t:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bianfeng/seppellita/db/action/ByteDataTask;->deleteBeforeData(Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method
