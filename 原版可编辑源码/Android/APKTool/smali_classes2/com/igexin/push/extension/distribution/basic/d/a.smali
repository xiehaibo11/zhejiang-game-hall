.class public Lcom/igexin/push/extension/distribution/basic/d/a;
.super Ljava/lang/Object;


# static fields
.field public static a:Lcom/igexin/push/extension/distribution/basic/d/a;


# instance fields
.field private b:Landroid/content/SharedPreferences;


# direct methods
.method private constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    const-string v1, "gx_sp"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/extension/distribution/basic/d/a;->b:Landroid/content/SharedPreferences;

    return-void
.end method

.method public static a()Lcom/igexin/push/extension/distribution/basic/d/a;
    .locals 1

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/d/a;->a:Lcom/igexin/push/extension/distribution/basic/d/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/extension/distribution/basic/d/a;

    invoke-direct {v0}, Lcom/igexin/push/extension/distribution/basic/d/a;-><init>()V

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/d/a;->a:Lcom/igexin/push/extension/distribution/basic/d/a;

    :cond_0
    sget-object v0, Lcom/igexin/push/extension/distribution/basic/d/a;->a:Lcom/igexin/push/extension/distribution/basic/d/a;

    return-object v0
.end method

.method public static b()Ljava/lang/String;
    .locals 3

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    const-string v1, "getui_sp"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "us"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static c()Ljava/lang/String;
    .locals 3

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    const-string v1, "getui_sp"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "uis"

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
