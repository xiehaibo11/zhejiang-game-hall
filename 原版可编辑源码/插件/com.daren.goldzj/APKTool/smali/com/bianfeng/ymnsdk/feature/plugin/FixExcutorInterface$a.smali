.class Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;
.super Ljava/lang/Object;
.source "FixExcutorInterface.java"

# interfaces
.implements Lcom/bianfeng/platform/PlatformSdkListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;->login()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;->a:Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface$a;->a:Lcom/bianfeng/ymnsdk/feature/plugin/FixExcutorInterface;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    return-void
.end method
