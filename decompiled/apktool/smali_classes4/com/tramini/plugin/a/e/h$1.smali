.class final Lcom/tramini/plugin/a/e/h$1;
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

.field final synthetic b:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 218
    iput-object p1, p0, Lcom/tramini/plugin/a/e/h$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/tramini/plugin/a/e/h$1;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)Z
    .locals 0

    .line 221
    instance-of p1, p1, Ljava/util/Map;

    return p1
.end method

.method public final b(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;
    .locals 2

    .line 226
    check-cast p1, Ljava/util/Map;

    if-eqz p1, :cond_4

    .line 228
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 232
    :cond_0
    iget-object v0, p0, Lcom/tramini/plugin/a/e/h$1;->a:Ljava/lang/String;

    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 233
    iget-object v0, p0, Lcom/tramini/plugin/a/e/h$1;->a:Ljava/lang/String;

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-nez p1, :cond_1

    .line 235
    invoke-static {}, Lcom/tramini/plugin/a/e/f$a;->a()Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 237
    :cond_1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tramini/plugin/a/e/h$1;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 238
    invoke-static {p1}, Lcom/tramini/plugin/a/e/f$a;->a(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 240
    :cond_2
    invoke-static {p1}, Lcom/tramini/plugin/a/e/f$a;->b(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 243
    :cond_3
    invoke-static {}, Lcom/tramini/plugin/a/e/f$a;->a()Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1

    .line 229
    :cond_4
    :goto_0
    invoke-static {}, Lcom/tramini/plugin/a/e/f$a;->a()Lcom/tramini/plugin/a/e/f$a;

    move-result-object p1

    return-object p1
.end method
