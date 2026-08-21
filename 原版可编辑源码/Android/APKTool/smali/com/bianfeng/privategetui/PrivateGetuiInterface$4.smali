.class Lcom/bianfeng/privategetui/PrivateGetuiInterface$4;
.super Ljava/lang/Object;
.source "PrivateGetuiInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/PrivateGetuiInterface;->onDestroy()V
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

    .line 228
    iput-object p1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$4;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    const-string v0, "offline"

    const-string v1, "false"

    .line 231
    invoke-static {v0, v1}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
