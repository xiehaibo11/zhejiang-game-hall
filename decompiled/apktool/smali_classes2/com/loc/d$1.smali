.class final Lcom/loc/d$1;
.super Lcom/loc/cs;
.source "AmapLocationManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/loc/d;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/d$1;->a:Landroid/content/Context;

    invoke-direct {p0}, Lcom/loc/cs;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    invoke-static {}, Lcom/loc/o;->l()V

    iget-object v0, p0, Lcom/loc/d$1;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/o;->a(Landroid/content/Context;)Ljava/lang/String;

    iget-object v0, p0, Lcom/loc/d$1;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/o;->f(Landroid/content/Context;)Ljava/lang/String;

    return-void
.end method
