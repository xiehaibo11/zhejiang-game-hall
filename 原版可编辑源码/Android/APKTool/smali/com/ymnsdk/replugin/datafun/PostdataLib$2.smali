.class Lcom/ymnsdk/replugin/datafun/PostdataLib$2;
.super Ljava/lang/Object;
.source "PostdataLib.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/datafun/PostdataLib;

.field final synthetic val$event:Lcom/ymnsdk/replugin/event/base/BaseEvent;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/datafun/PostdataLib;Lcom/ymnsdk/replugin/event/base/BaseEvent;)V
    .locals 0

    .line 62
    iput-object p1, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;->this$0:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    iput-object p2, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;->val$event:Lcom/ymnsdk/replugin/event/base/BaseEvent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 8

    .line 65
    iget-object v0, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;->val$event:Lcom/ymnsdk/replugin/event/base/BaseEvent;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/event/base/BaseEvent;->toString()Ljava/lang/String;

    move-result-object v3

    .line 66
    new-instance v0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;

    iget-object v1, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;->this$0:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    invoke-static {v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->access$000(Lcom/ymnsdk/replugin/datafun/PostdataLib;)Ljava/lang/String;

    move-result-object v2

    iget-object v1, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib$2;->this$0:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    .line 67
    invoke-static {v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->access$100(Lcom/ymnsdk/replugin/datafun/PostdataLib;)Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;->toString()Ljava/lang/String;

    move-result-object v6

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v7, 0x0

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 68
    invoke-static {}, Lcom/bianfeng/datafunsdk/PostDatalib;->getInstance()Lcom/bianfeng/datafunsdk/PostDatalib;

    move-result-object v1

    .line 69
    invoke-virtual {v1, v0}, Lcom/bianfeng/datafunsdk/PostDatalib;->postByteData(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V

    return-void
.end method
