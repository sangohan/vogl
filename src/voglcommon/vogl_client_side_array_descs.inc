//									 id												entrypoint											is_enabled						get_binding											get_pointer									get_size									get_stride								get_type
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_vertex_pointer_array_id, VOGL_ENTRYPOINT_glVertexPointer, GL_VERTEX_ARRAY, GL_VERTEX_ARRAY_BUFFER_BINDING, GL_VERTEX_ARRAY_POINTER, GL_VERTEX_ARRAY_SIZE, GL_VERTEX_ARRAY_STRIDE, GL_VERTEX_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_color_pointer_array_id, VOGL_ENTRYPOINT_glColorPointer, GL_COLOR_ARRAY, GL_COLOR_ARRAY_BUFFER_BINDING, GL_COLOR_ARRAY_POINTER, GL_COLOR_ARRAY_SIZE, GL_COLOR_ARRAY_STRIDE, GL_COLOR_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_index_pointer_array_id, VOGL_ENTRYPOINT_glIndexPointer, GL_INDEX_ARRAY, GL_INDEX_ARRAY_BUFFER_BINDING, GL_INDEX_ARRAY_POINTER, 0, GL_INDEX_ARRAY_STRIDE, GL_INDEX_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_secondary_color_pointer_array_id, VOGL_ENTRYPOINT_glSecondaryColorPointer, GL_SECONDARY_COLOR_ARRAY, GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING, GL_SECONDARY_COLOR_ARRAY_POINTER, GL_SECONDARY_COLOR_ARRAY_SIZE, GL_SECONDARY_COLOR_ARRAY_STRIDE, GL_SECONDARY_COLOR_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_texcoord_pointer_array_id, VOGL_ENTRYPOINT_glTexCoordPointer, GL_TEXTURE_COORD_ARRAY, GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING, GL_TEXTURE_COORD_ARRAY_POINTER, GL_TEXTURE_COORD_ARRAY_SIZE, GL_TEXTURE_COORD_ARRAY_STRIDE, GL_TEXTURE_COORD_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_fog_coord_pointer_array_id, VOGL_ENTRYPOINT_glFogCoordPointer, GL_FOG_COORD_ARRAY, GL_FOG_COORD_ARRAY_BUFFER_BINDING, GL_FOG_COORD_ARRAY_POINTER, 0, GL_FOG_COORD_ARRAY_STRIDE, GL_FOG_COORD_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_normal_pointer_array_id, VOGL_ENTRYPOINT_glNormalPointer, GL_NORMAL_ARRAY, GL_NORMAL_ARRAY_BUFFER_BINDING, GL_NORMAL_ARRAY_POINTER, 0, GL_NORMAL_ARRAY_STRIDE, GL_NORMAL_ARRAY_TYPE)
VOGL_CLIENT_SIDE_ARRAY_DESC(vogl_edge_flag_pointer_array_id, VOGL_ENTRYPOINT_glEdgeFlagPointer, GL_EDGE_FLAG_ARRAY, GL_EDGE_FLAG_ARRAY_BUFFER_BINDING, GL_EDGE_FLAG_ARRAY_POINTER, 0, GL_EDGE_FLAG_ARRAY_STRIDE, 0)