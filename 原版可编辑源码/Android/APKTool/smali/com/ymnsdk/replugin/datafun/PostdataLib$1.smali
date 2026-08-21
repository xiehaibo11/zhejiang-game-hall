.class Lcom/ymnsdk/replugin/datafun/PostdataLib$1;
.super Ljava/lang/Object;
.source "PostdataLib.java"

# interfaces
.implements Lcom/bianfeng/seppellita/SepperllitaSdk$InitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/datafun/PostdataLib;->init(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/datafun/PostdataLib;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/datafun/PostdataLib;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/ymnsdk/replugin/datafun/PostdataLib$1;->this$0:Lcom/ymnsdk/replugin/datafun/PostdataLib;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFail(Ljava/lang/String;)V
    .locals 2

    .line 55
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SepperllitaSdk \u521d\u59cb\u5316\u5931\u8d25|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ymn"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method public onSuc()V
    .locals 2

    const-string v0, "ymn"

    const-string v1, "SepperllitaSdk \u521d\u59cb\u5316\u6210\u529f"

    .line 50
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
