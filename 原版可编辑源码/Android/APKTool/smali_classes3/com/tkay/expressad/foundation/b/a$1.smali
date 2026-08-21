.class final Lcom/tkay/expressad/foundation/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/b/a;->a(Ljava/util/Map;Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/expressad/foundation/b/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/b/a;Landroid/content/Context;)V
    .locals 0

    .line 93
    iput-object p1, p0, Lcom/tkay/expressad/foundation/b/a$1;->b:Lcom/tkay/expressad/foundation/b/a;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/b/a$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/foundation/b/a$1;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->i(Landroid/content/Context;)V

    return-void
.end method
