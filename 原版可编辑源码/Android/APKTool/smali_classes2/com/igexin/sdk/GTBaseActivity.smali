.class public Lcom/igexin/sdk/GTBaseActivity;
.super Landroid/app/Activity;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    invoke-static {}, Lcom/igexin/sdk/GTServiceManager;->getInstance()Lcom/igexin/sdk/GTServiceManager;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/igexin/sdk/GTServiceManager;->onActivityCreate(Landroid/app/Activity;)V

    return-void
.end method
