.class public Lcom/cmic/gen/sdk/e/k;
.super Ljava/lang/Object;
.source "SharedPreferencesUtil.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/e/k$a;
    }
.end annotation


# static fields
.field private static a:Landroid/content/Context;


# direct methods
.method public static a(Ljava/lang/String;I)I
    .locals 3

    .line 32
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const-string v1, "ssoconfigs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 33
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 34
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    return p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;I)I
    .locals 2

    .line 39
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 40
    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 41
    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    return p0
.end method

.method public static a(Ljava/lang/String;J)J
    .locals 3

    .line 50
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const-string v1, "ssoconfigs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 51
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 52
    invoke-interface {v0, p0, p1, p2}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p0

    return-wide p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;J)J
    .locals 2

    .line 57
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 58
    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 59
    invoke-interface {p0, p1, p2, p3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p0

    return-wide p0
.end method

.method public static a()Lcom/cmic/gen/sdk/e/k$a;
    .locals 3

    .line 117
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const-string v1, "ssoconfigs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 118
    new-instance v1, Lcom/cmic/gen/sdk/e/k$a;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/cmic/gen/sdk/e/k$a;-><init>(Landroid/content/SharedPreferences$Editor;)V

    return-object v1
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 100
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 101
    invoke-static {p1}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 102
    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 0

    .line 19
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 3

    .line 111
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const-string v1, "ssoconfigs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 112
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 113
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p0}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 65
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const-string v1, "ssoconfigs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 66
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 67
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    return-void
.end method

.method public static a(Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_5

    .line 71
    invoke-interface {p0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_5

    .line 72
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const/4 v1, 0x0

    const-string v2, "ssoconfigs"

    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 73
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 74
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_4

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 75
    invoke-interface {p0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    .line 76
    invoke-static {v2}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 77
    instance-of v4, v3, Ljava/lang/String;

    if-eqz v4, :cond_1

    .line 78
    check-cast v3, Ljava/lang/String;

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 79
    :cond_1
    instance-of v4, v3, Ljava/lang/Integer;

    if-eqz v4, :cond_2

    .line 80
    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 81
    :cond_2
    instance-of v4, v3, Ljava/lang/Long;

    if-eqz v4, :cond_3

    .line 82
    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    invoke-interface {v0, v2, v3, v4}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 83
    :cond_3
    instance-of v4, v3, Ljava/lang/Boolean;

    if-eqz v4, :cond_0

    .line 84
    check-cast v3, Ljava/lang/Boolean;

    invoke-virtual {v3}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v3

    invoke-interface {v0, v2, v3}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 87
    :cond_4
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    :cond_5
    return-void
.end method

.method public static b(Ljava/lang/String;)Lcom/cmic/gen/sdk/e/k$a;
    .locals 2

    .line 122
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 123
    new-instance v0, Lcom/cmic/gen/sdk/e/k$a;

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/cmic/gen/sdk/e/k$a;-><init>(Landroid/content/SharedPreferences$Editor;)V

    return-object v0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 93
    sget-object v0, Lcom/cmic/gen/sdk/e/k;->a:Landroid/content/Context;

    const-string v1, "ssoconfigs"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 94
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 95
    invoke-interface {v0, p0, p1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
