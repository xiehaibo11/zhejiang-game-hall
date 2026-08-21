.class final Lcom/tramini/plugin/b/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tramini/plugin/a/d/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/a/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tramini/plugin/a/d/c;

.field final synthetic b:Lcom/tramini/plugin/b/b;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/b/b;Lcom/tramini/plugin/a/d/c;)V
    .locals 0

    .line 129
    iput-object p1, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    iput-object p2, p0, Lcom/tramini/plugin/b/b$1;->a:Lcom/tramini/plugin/a/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 132
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/b;Z)Z

    return-void
.end method

.method public final a(Ljava/lang/Object;)V
    .locals 6

    .line 137
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/b;Z)Z

    if-eqz p1, :cond_1

    .line 139
    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 141
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    invoke-static {v0}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/b;)Landroid/content/Context;

    move-result-object v0

    const-string v2, "tramini"

    const-string v3, "P_SY"

    invoke-static {v0, v2, v3, p1}, Lcom/tramini/plugin/a/g/i;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v0, v3, v4}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/b;J)J

    .line 144
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    invoke-static {v0}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/b;)Landroid/content/Context;

    move-result-object v0

    const-string v3, "P_UD_TE"

    iget-object v4, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    invoke-static {v4}, Lcom/tramini/plugin/b/b;->b(Lcom/tramini/plugin/b/b;)J

    move-result-wide v4

    if-eqz v0, :cond_0

    .line 1031
    :try_start_0
    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 1032
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 1033
    invoke-interface {v0, v3, v4, v5}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 1034
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_0

    .line 146
    :catch_0
    :cond_0
    invoke-static {p1}, Lcom/tramini/plugin/a/g/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 152
    invoke-static {p1}, Lcom/tramini/plugin/b/a;->a(Ljava/lang/String;)Lcom/tramini/plugin/b/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 156
    invoke-static {p1}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/a;)Lcom/tramini/plugin/b/a;

    .line 157
    invoke-static {p1}, Lcom/tramini/plugin/a/g/g;->a(Lcom/tramini/plugin/b/a;)Ljava/lang/String;

    move-result-object v0

    .line 158
    invoke-static {}, Lcom/tramini/plugin/a/f/a;->a()Lcom/tramini/plugin/a/f/a;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tramini/plugin/b/a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lcom/tramini/plugin/a/f/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 160
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/b/a;)V

    .line 161
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->a:Lcom/tramini/plugin/a/d/c;

    if-eqz v0, :cond_1

    .line 162
    invoke-interface {v0, p1}, Lcom/tramini/plugin/a/d/c;->a(Lcom/tramini/plugin/b/a;)V

    :cond_1
    return-void
.end method

.method public final b()V
    .locals 2

    .line 172
    iget-object v0, p0, Lcom/tramini/plugin/b/b$1;->b:Lcom/tramini/plugin/b/b;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/tramini/plugin/b/b;->a(Lcom/tramini/plugin/b/b;Z)Z

    return-void
.end method
