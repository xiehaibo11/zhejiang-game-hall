.class final Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$3;
.super Ljava/lang/Object;
.source "CoustomDialog.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog;->sysMessageBox(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic val$sysfuncInterface:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$3;->val$sysfuncInterface:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1

    .line 38
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$3;->val$sysfuncInterface:Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;

    const/16 p2, 0x4b3

    const-string v0, "\u53d6\u6d88"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
