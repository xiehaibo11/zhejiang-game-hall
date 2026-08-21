.class Lcom/bianfeng/replugin/HostProcessActivity$1;
.super Ljava/lang/Object;
.source "HostProcessActivity.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/replugin/HostProcessActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/replugin/HostProcessActivity;


# direct methods
.method constructor <init>(Lcom/bianfeng/replugin/HostProcessActivity;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/bianfeng/replugin/HostProcessActivity$1;->this$0:Lcom/bianfeng/replugin/HostProcessActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 2

    .line 47
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity$1;->this$0:Lcom/bianfeng/replugin/HostProcessActivity;

    invoke-static {v0}, Lcom/bianfeng/replugin/HostProcessActivity;->access$000(Lcom/bianfeng/replugin/HostProcessActivity;)V

    .line 48
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity$1;->this$0:Lcom/bianfeng/replugin/HostProcessActivity;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/bianfeng/replugin/HostProcessActivity;->access$102(Lcom/bianfeng/replugin/HostProcessActivity;Z)Z

    .line 49
    iget-object v0, p0, Lcom/bianfeng/replugin/HostProcessActivity$1;->this$0:Lcom/bianfeng/replugin/HostProcessActivity;

    invoke-static {v0, p1, p2}, Lcom/bianfeng/replugin/HostProcessActivity;->access$200(Lcom/bianfeng/replugin/HostProcessActivity;ILjava/lang/String;)V

    return-void
.end method
