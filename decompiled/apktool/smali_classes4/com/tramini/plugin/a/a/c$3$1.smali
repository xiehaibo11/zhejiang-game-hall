.class final Lcom/tramini/plugin/a/a/c$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tramini/plugin/a/d/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/a/c$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tramini/plugin/a/a/c$3;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/a/c$3;)V
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c$3$1;->a:Lcom/tramini/plugin/a/a/c$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tramini/plugin/b/a;)V
    .locals 1

    .line 216
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$3$1;->a:Lcom/tramini/plugin/a/a/c$3;

    iget-object v0, v0, Lcom/tramini/plugin/a/a/c$3;->b:Lcom/tramini/plugin/a/a/c;

    invoke-static {v0, p1}, Lcom/tramini/plugin/a/a/c;->a(Lcom/tramini/plugin/a/a/c;Lcom/tramini/plugin/b/a;)V

    return-void
.end method
