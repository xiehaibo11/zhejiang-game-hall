.class final Lcom/tramini/plugin/a/a/c$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tramini/plugin/a/a/c;->c(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tramini/plugin/a/a/c;


# direct methods
.method constructor <init>(Lcom/tramini/plugin/a/a/c;Ljava/lang/String;)V
    .locals 0

    .line 317
    iput-object p1, p0, Lcom/tramini/plugin/a/a/c$6;->b:Lcom/tramini/plugin/a/a/c;

    iput-object p2, p0, Lcom/tramini/plugin/a/a/c$6;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 320
    iget-object v0, p0, Lcom/tramini/plugin/a/a/c$6;->a:Ljava/lang/String;

    .line 1022
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    sput-object v1, Lcom/tramini/plugin/a/g/d;->a:Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 1027
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
