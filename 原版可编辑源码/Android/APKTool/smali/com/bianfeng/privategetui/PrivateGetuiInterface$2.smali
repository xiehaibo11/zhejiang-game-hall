.class Lcom/bianfeng/privategetui/PrivateGetuiInterface$2;
.super Ljava/lang/Object;
.source "PrivateGetuiInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/PrivateGetuiInterface;->readLocalData()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V
    .locals 0

    .line 196
    iput-object p1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$2;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const-string v0, "key"

    .line 199
    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 200
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "gt_get_notify_info"

    if-eqz v1, :cond_0

    .line 201
    iget-object v0, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$2;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v1, 0x5e3

    const-string v3, "\u83b7\u53d6\u6570\u636e\u5931\u8d25"

    invoke-virtual {v0, v1, v3, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 203
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$2;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v3, 0x5e2

    invoke-virtual {v1, v3, v0, v2}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
