.class final Lcom/tkay/expressad/mbbanner/a/d/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/mbbanner/a/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/mbbanner/a/d/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/expressad/mbbanner/a/c/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/mbbanner/a/d/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/mbbanner/a/d/a;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/a$1;->a:Lcom/tkay/expressad/mbbanner/a/d/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 147
    invoke-static {}, Lcom/tkay/expressad/mbbanner/a/d/a;->a()Lcom/tkay/expressad/mbbanner/a/d/a;

    move-result-object v0

    monitor-enter v0

    .line 149
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/a$1;->a:Lcom/tkay/expressad/mbbanner/a/d/a;

    invoke-static {v1}, Lcom/tkay/expressad/mbbanner/a/d/a;->a(Lcom/tkay/expressad/mbbanner/a/d/a;)Ljava/util/Map;

    move-result-object v1

    sget-object v2, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-interface {v1, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 150
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method
