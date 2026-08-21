.class public Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog;
.super Ljava/lang/Object;
.source "CoustomDialog.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static sysMessageBox(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V
    .locals 4

    const-string v0, "\\|"

    .line 10
    invoke-virtual {p3, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p3

    .line 11
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const/4 p0, 0x0

    .line 12
    invoke-virtual {v0, p0}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 13
    array-length v1, p3

    if-lez v1, :cond_0

    .line 16
    aget-object v2, p3, p0

    if-eqz v2, :cond_0

    .line 17
    aget-object p0, p3, p0

    new-instance v2, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$1;

    invoke-direct {v2, p4}, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-virtual {v0, p0, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    const/4 p0, 0x1

    :cond_0
    if-ge p0, v1, :cond_1

    .line 24
    aget-object v2, p3, p0

    if-eqz v2, :cond_1

    add-int/lit8 v2, p0, 0x1

    .line 25
    aget-object p0, p3, p0

    new-instance v3, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$2;

    invoke-direct {v3, p4}, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$2;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-virtual {v0, p0, v3}, Landroid/app/AlertDialog$Builder;->setNeutralButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move p0, v2

    :cond_1
    if-ge p0, v1, :cond_2

    .line 33
    aget-object v1, p3, p0

    if-eqz v1, :cond_2

    .line 34
    aget-object p0, p3, p0

    new-instance p3, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$3;

    invoke-direct {p3, p4}, Lcom/bianfeng/ymnsdk/sysfunc/CoustomDialog$3;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/SysfuncInterface;)V

    invoke-virtual {v0, p0, p3}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 42
    :cond_2
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const p0, 0x108009b

    .line 43
    invoke-virtual {v0, p0}, Landroid/app/AlertDialog$Builder;->setIcon(I)Landroid/app/AlertDialog$Builder;

    .line 44
    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 45
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->show()Landroid/app/AlertDialog;

    return-void
.end method
