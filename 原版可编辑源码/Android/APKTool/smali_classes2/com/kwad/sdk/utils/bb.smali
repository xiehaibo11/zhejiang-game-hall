.class public Lcom/kwad/sdk/utils/bb;
.super Ljava/lang/Object;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/kwad/sdk/utils/bb;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/bb;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 2

    if-eqz p1, :cond_5

    instance-of v0, p2, Ljava/lang/Integer;

    if-eqz v0, :cond_0

    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_0
    instance-of v0, p2, Ljava/lang/Long;

    if-eqz v0, :cond_1

    check-cast p2, Ljava/lang/Long;

    invoke-virtual {p2}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    invoke-interface {p0, p1, v0, v1}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_1
    instance-of v0, p2, Ljava/lang/Boolean;

    if-eqz v0, :cond_2

    check-cast p2, Ljava/lang/Boolean;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_2
    instance-of v0, p2, Ljava/lang/Float;

    if-eqz v0, :cond_3

    check-cast p2, Ljava/lang/Float;

    invoke-virtual {p2}, Ljava/lang/Float;->floatValue()F

    move-result p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putFloat(Ljava/lang/String;F)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_3
    instance-of v0, p2, Ljava/util/Set;

    if-eqz v0, :cond_4

    check-cast p2, Ljava/util/Set;

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putStringSet(Ljava/lang/String;Ljava/util/Set;)Landroid/content/SharedPreferences$Editor;

    return-void

    :cond_4
    instance-of v0, p2, Ljava/lang/String;

    if-eqz v0, :cond_5

    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    :cond_5
    return-void
.end method

.method static a(Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    if-eqz p3, :cond_1

    invoke-static {p2}, Lcom/kwad/sdk/core/a/c;->cT(Ljava/lang/String;)Z

    move-result p3

    if-nez p3, :cond_1

    invoke-static {p2}, Lcom/kwad/sdk/core/a/c;->cR(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    :cond_1
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method static a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "TT;>;)V"
        }
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    :try_start_0
    invoke-static {p0, v1, v0}, Lcom/kwad/sdk/utils/bb;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    sget-object v1, Lcom/kwad/sdk/utils/bb;->TAG:Ljava/lang/String;

    invoke-static {v0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method static ar(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method static b(Ljava/lang/String;Ljava/lang/String;J)J
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-wide p2

    :cond_0
    invoke-interface {p0, p1, p2, p3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p0

    return-wide p0
.end method

.method static b(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method static c(Ljava/lang/String;Ljava/lang/String;I)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return p2

    :cond_0
    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p0

    return p0
.end method

.method public static fH(Ljava/lang/String;)Landroid/content/SharedPreferences;
    .locals 2

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method static g(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, p2, v0}, Lcom/kwad/sdk/utils/bb;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method

.method static h(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-object p2

    :cond_0
    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_3

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    invoke-static {p0, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    invoke-static {p0}, Lcom/kwad/sdk/core/a/c;->cT(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-static {p0}, Lcom/kwad/sdk/core/a/c;->cS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_2
    return-object p0

    :cond_3
    :goto_0
    return-object p2
.end method

.method static i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/a/c;->cT(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/a/c;->cR(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p2, p0}, Lcom/kwad/sdk/utils/bb;->g(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static l(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method static m(Ljava/lang/String;Ljava/lang/String;Z)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bb;->fH(Ljava/lang/String;)Landroid/content/SharedPreferences;

    move-result-object p0

    if-nez p0, :cond_0

    return p2

    :cond_0
    invoke-interface {p0, p1, p2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p0

    return p0
.end method
