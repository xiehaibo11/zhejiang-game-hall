.class public Lcom/igexin/push/util/k;
.super Ljava/lang/Object;


# direct methods
.method public static a(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 8

    const-string v0, "ua"

    const-string v1, "uis"

    const-string v2, "us"

    :try_start_0
    invoke-virtual {p1, v2}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v4, 0x0

    const-string v5, ""

    if-eqz v3, :cond_1

    :try_start_1
    invoke-virtual {p1, v2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v5}, Lcom/igexin/b/b/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    new-array v6, v4, [Ljava/lang/String;

    invoke-static {p0, v2, v5, v6}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/String;

    invoke-virtual {v6, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-nez v7, :cond_1

    sget-object v7, Lcom/igexin/push/core/CoreConsts;->n:Ljava/lang/String;

    invoke-virtual {v7, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_0

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    new-array v3, v4, [Ljava/lang/String;

    invoke-static {p0, v2, v5, v3}, Lcom/igexin/push/util/k;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    new-array v6, v4, [Ljava/lang/String;

    invoke-static {p0, v2, v3, v6}, Lcom/igexin/push/util/k;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V

    :cond_1
    :goto_0
    invoke-virtual {p1, v1}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    new-array v2, v4, [Ljava/lang/String;

    invoke-static {p0, v1, v5, v2}, Lcom/igexin/push/util/k;->c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, v5}, Lcom/igexin/b/b/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_2

    new-array v2, v4, [Ljava/lang/String;

    invoke-static {p0, v1, v3, v2}, Lcom/igexin/push/util/k;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V

    :cond_2
    invoke-virtual {p1, v0}, Landroid/content/Intent;->hasExtra(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/igexin/push/core/x;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v5}, Lcom/igexin/b/b/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_3

    new-array v1, v4, [Ljava/lang/String;

    invoke-static {p0, v0, p1, v1}, Lcom/igexin/push/util/k;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_3
    return-void
.end method

.method public static varargs a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    array-length v1, p3

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    aget-object p3, p3, v0

    goto :goto_0

    :cond_0
    const-string p3, "getui_sp"

    :goto_0
    invoke-virtual {p0, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    instance-of p3, p2, Ljava/lang/String;

    if-eqz p3, :cond_1

    check-cast p2, Ljava/lang/String;

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_1
    instance-of p3, p2, Ljava/lang/Integer;

    if-eqz p3, :cond_2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_2
    instance-of p3, p2, Ljava/lang/Boolean;

    if-eqz p3, :cond_3

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_3
    instance-of p3, p2, Ljava/lang/Float;

    if-eqz p3, :cond_4

    check-cast p2, Ljava/lang/Float;

    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putFloat(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_4
    instance-of p3, p2, Ljava/lang/Long;

    if-eqz p3, :cond_5

    check-cast p2, Ljava/lang/Long;

    invoke-virtual {p2}, Ljava/lang/Long;->longValue()J

    move-result-wide p2

    invoke-interface {p0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    :cond_5
    :goto_1
    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public static varargs b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)V
    .locals 3

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    array-length v1, p3

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    aget-object p3, p3, v0

    goto :goto_0

    :cond_0
    const-string p3, "getui_sp"

    :goto_0
    invoke-virtual {p0, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    instance-of p3, p2, Ljava/lang/String;

    if-eqz p3, :cond_1

    check-cast p2, Ljava/lang/String;

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_1
    instance-of p3, p2, Ljava/lang/Integer;

    if-eqz p3, :cond_2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_2
    instance-of p3, p2, Ljava/lang/Boolean;

    if-eqz p3, :cond_3

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_3
    instance-of p3, p2, Ljava/lang/Float;

    if-eqz p3, :cond_4

    check-cast p2, Ljava/lang/Float;

    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putFloat(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;

    goto :goto_1

    :cond_4
    instance-of p3, p2, Ljava/lang/Long;

    if-eqz p3, :cond_5

    check-cast p2, Ljava/lang/Long;

    invoke-virtual {p2}, Ljava/lang/Long;->longValue()J

    move-result-wide p2

    invoke-interface {p0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    :cond_5
    :goto_1
    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public static varargs c(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;
    .locals 3

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    array-length v1, p3

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    aget-object p3, p3, v0

    goto :goto_0

    :cond_0
    const-string p3, "getui_sp"

    :goto_0
    invoke-virtual {p0, p3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    instance-of p3, p2, Ljava/lang/String;

    if-eqz p3, :cond_1

    check-cast p2, Ljava/lang/String;

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    instance-of p3, p2, Ljava/lang/Integer;

    if-eqz p3, :cond_2

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    return-object p0

    :cond_2
    instance-of p3, p2, Ljava/lang/Boolean;

    if-eqz p3, :cond_3

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p0

    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    return-object p0

    :cond_3
    instance-of p3, p2, Ljava/lang/Float;

    if-eqz p3, :cond_4

    check-cast p2, Ljava/lang/Float;

    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getFloat(Ljava/lang/String;F)F

    move-result p0

    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    return-object p0

    :cond_4
    instance-of p3, p2, Ljava/lang/Long;

    if-eqz p3, :cond_5

    check-cast p2, Ljava/lang/Long;

    invoke-virtual {p2}, Ljava/lang/Long;->longValue()J

    move-result-wide p2

    invoke-interface {p0, p1, p2, p3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p0

    invoke-static {p0, p1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p0

    return-object p0

    :cond_5
    return-object p2
.end method
