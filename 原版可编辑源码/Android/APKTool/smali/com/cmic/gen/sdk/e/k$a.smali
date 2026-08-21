.class public Lcom/cmic/gen/sdk/e/k$a;
.super Ljava/lang/Object;
.source "SharedPreferencesUtil.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/e/k;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private final a:Landroid/content/SharedPreferences$Editor;


# direct methods
.method constructor <init>(Landroid/content/SharedPreferences$Editor;)V
    .locals 0

    .line 144
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 145
    iput-object p1, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 1

    .line 174
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public a(Ljava/lang/String;I)V
    .locals 1

    .line 157
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public a(Ljava/lang/String;J)V
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    return-void
.end method

.method public b()V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public c()V
    .locals 1

    .line 170
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/k$a;->a:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->clear()Landroid/content/SharedPreferences$Editor;

    return-void
.end method
