.class final Lcom/tramini/plugin/a/e/h$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tramini/plugin/a/e/f$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/e/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 252
    iput-object p1, p0, Lcom/tramini/plugin/a/e/h$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)Z
    .locals 0

    .line 255
    instance-of p1, p1, Ljava/util/Map;

    return p1
.end method

.method public final b(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;
    .locals 2

    .line 260
    check-cast p1, Ljava/util/Map;

    if-eqz p1, :cond_4

    .line 262
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 266
    :cond_0
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    .line 268
    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map$Entry;

    .line 269
    invoke-interface {p1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p1

    if-nez p1, :cond_1

    .line 272
    invoke-static {}, Lcom/tramini/plugin/a/e/f$a;->a()Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 274
    :cond_1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tramini/plugin/a/e/h$2;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 275
    invoke-static {p1}, Lcom/tramini/plugin/a/e/f$a;->a(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 277
    :cond_2
    invoke-static {p1}, Lcom/tramini/plugin/a/e/f$a;->b(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 280
    :cond_3
    invoke-static {}, Lcom/tramini/plugin/a/e/f$a;->a()Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 263
    :cond_4
    :goto_0
    invoke-static {}, Lcom/tramini/plugin/a/e/f$a;->a()Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1
.end method
