.class Lcom/bianfeng/pluginlibrary/YmnSupport$2;
.super Ljava/lang/Object;
.source "YmnSupport.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/pluginlibrary/YmnSupport;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;


# direct methods
.method constructor <init>(Lcom/bianfeng/pluginlibrary/YmnSupport;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$2;->this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 2

    .line 73
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "code :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " msg: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YmnUnitySupport"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/16 v0, 0x70

    if-eq p1, v0, :cond_0

    const/16 v0, 0x73

    if-eq p1, v0, :cond_0

    const/16 v0, 0x74

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    packed-switch p1, :pswitch_data_1

    packed-switch p1, :pswitch_data_2

    packed-switch p1, :pswitch_data_3

    .line 126
    :cond_0
    :pswitch_0
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport$2;->this$0:Lcom/bianfeng/pluginlibrary/YmnSupport;

    invoke-static {v0}, Lcom/bianfeng/pluginlibrary/YmnSupport;->access$100(Lcom/bianfeng/pluginlibrary/YmnSupport;)Lcom/bianfeng/pluginlibrary/YmnListener;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/pluginlibrary/YmnListener;->callBack(ILjava/lang/String;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x64
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x69
        :pswitch_0
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0xc8
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch

    :pswitch_data_3
    .packed-switch 0xcd
        :pswitch_0
        :pswitch_0
        :pswitch_0
    .end packed-switch
.end method
