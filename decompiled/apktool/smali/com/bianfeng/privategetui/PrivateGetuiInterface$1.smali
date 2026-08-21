.class Lcom/bianfeng/privategetui/PrivateGetuiInterface$1;
.super Ljava/lang/Object;
.source "PrivateGetuiInterface.java"

# interfaces
.implements Lcom/igexin/sdk/IUserLoggerInterface;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/privategetui/PrivateGetuiInterface;->onContextChanged(Landroid/content/Context;)V
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

    .line 106
    iput-object p1, p0, Lcom/bianfeng/privategetui/PrivateGetuiInterface$1;->this$0:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public log(Ljava/lang/String;)V
    .locals 2

    .line 109
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PrivateGetuiInterface onInit---->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method
